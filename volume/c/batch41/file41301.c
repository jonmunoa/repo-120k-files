// fichero 41301 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41301;

Registro41301 crear_registro41301(int id) {
    Registro41301 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
