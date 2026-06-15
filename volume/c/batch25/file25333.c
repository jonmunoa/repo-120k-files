// fichero 25333 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25333;

Registro25333 crear_registro25333(int id) {
    Registro25333 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
