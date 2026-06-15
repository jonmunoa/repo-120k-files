// fichero 5881 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5881;

Registro5881 crear_registro5881(int id) {
    Registro5881 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
