// fichero 44789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44789;

Registro44789 crear_registro44789(int id) {
    Registro44789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
