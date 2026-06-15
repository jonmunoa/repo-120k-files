// fichero 9033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9033;

Registro9033 crear_registro9033(int id) {
    Registro9033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
