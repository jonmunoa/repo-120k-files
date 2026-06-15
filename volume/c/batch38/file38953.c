// fichero 38953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro38953;

Registro38953 crear_registro38953(int id) {
    Registro38953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
