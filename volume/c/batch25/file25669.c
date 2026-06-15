// fichero 25669 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25669;

Registro25669 crear_registro25669(int id) {
    Registro25669 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
