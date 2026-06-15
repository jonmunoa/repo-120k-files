// fichero 9449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9449;

Registro9449 crear_registro9449(int id) {
    Registro9449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
