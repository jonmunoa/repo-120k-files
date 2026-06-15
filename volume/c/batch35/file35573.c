// fichero 35573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35573;

Registro35573 crear_registro35573(int id) {
    Registro35573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
