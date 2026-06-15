// fichero 21449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21449;

Registro21449 crear_registro21449(int id) {
    Registro21449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
