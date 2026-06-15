// fichero 25897 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25897;

Registro25897 crear_registro25897(int id) {
    Registro25897 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
