// fichero 25565 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25565;

Registro25565 crear_registro25565(int id) {
    Registro25565 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
