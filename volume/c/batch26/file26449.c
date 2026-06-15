// fichero 26449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26449;

Registro26449 crear_registro26449(int id) {
    Registro26449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
