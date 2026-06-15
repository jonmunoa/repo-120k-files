// fichero 9217 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9217;

Registro9217 crear_registro9217(int id) {
    Registro9217 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
