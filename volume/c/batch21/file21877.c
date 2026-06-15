// fichero 21877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21877;

Registro21877 crear_registro21877(int id) {
    Registro21877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
