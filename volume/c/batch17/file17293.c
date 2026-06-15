// fichero 17293 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17293;

Registro17293 crear_registro17293(int id) {
    Registro17293 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
