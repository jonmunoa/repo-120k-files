// fichero 26181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26181;

Registro26181 crear_registro26181(int id) {
    Registro26181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
