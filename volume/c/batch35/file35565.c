// fichero 35565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35565;

Registro35565 crear_registro35565(int id) {
    Registro35565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
