// fichero 8733 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8733;

Registro8733 crear_registro8733(int id) {
    Registro8733 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
