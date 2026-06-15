// fichero 44245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44245;

Registro44245 crear_registro44245(int id) {
    Registro44245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
