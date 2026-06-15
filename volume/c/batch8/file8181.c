// fichero 8181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8181;

Registro8181 crear_registro8181(int id) {
    Registro8181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
