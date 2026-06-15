// fichero 14181 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14181;

Registro14181 crear_registro14181(int id) {
    Registro14181 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
