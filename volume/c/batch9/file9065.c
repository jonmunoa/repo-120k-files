// fichero 9065 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9065;

Registro9065 crear_registro9065(int id) {
    Registro9065 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
