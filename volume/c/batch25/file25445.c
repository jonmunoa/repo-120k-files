// fichero 25445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25445;

Registro25445 crear_registro25445(int id) {
    Registro25445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
