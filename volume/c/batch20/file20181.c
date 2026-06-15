// fichero 20181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20181;

Registro20181 crear_registro20181(int id) {
    Registro20181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
