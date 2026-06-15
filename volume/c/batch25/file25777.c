// fichero 25777 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25777;

Registro25777 crear_registro25777(int id) {
    Registro25777 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
