// fichero 41501 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41501;

Registro41501 crear_registro41501(int id) {
    Registro41501 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
