// fichero 44261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44261;

Registro44261 crear_registro44261(int id) {
    Registro44261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
