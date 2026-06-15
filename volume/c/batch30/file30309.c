// fichero 30309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30309;

Registro30309 crear_registro30309(int id) {
    Registro30309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
