// fichero 25753 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25753;

Registro25753 crear_registro25753(int id) {
    Registro25753 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
