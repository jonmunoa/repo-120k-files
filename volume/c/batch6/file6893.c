// fichero 6893 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6893;

Registro6893 crear_registro6893(int id) {
    Registro6893 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
