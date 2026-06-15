// fichero 25781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25781;

Registro25781 crear_registro25781(int id) {
    Registro25781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
