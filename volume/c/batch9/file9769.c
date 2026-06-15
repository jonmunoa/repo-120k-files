// fichero 9769 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9769;

Registro9769 crear_registro9769(int id) {
    Registro9769 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
