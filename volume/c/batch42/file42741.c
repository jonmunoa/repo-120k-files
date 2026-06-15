// fichero 42741 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42741;

Registro42741 crear_registro42741(int id) {
    Registro42741 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
