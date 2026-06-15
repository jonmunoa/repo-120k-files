// fichero 35261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35261;

Registro35261 crear_registro35261(int id) {
    Registro35261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
