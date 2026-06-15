// fichero 8845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8845;

Registro8845 crear_registro8845(int id) {
    Registro8845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
