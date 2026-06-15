// fichero 6841 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6841;

Registro6841 crear_registro6841(int id) {
    Registro6841 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
