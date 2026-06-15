// fichero 11309 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11309;

Registro11309 crear_registro11309(int id) {
    Registro11309 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
