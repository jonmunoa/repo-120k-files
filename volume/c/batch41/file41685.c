// fichero 41685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41685;

Registro41685 crear_registro41685(int id) {
    Registro41685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
