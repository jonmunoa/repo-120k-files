// fichero 9173 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9173;

Registro9173 crear_registro9173(int id) {
    Registro9173 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
