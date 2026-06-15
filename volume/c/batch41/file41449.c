// fichero 41449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41449;

Registro41449 crear_registro41449(int id) {
    Registro41449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
