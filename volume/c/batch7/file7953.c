// fichero 7953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7953;

Registro7953 crear_registro7953(int id) {
    Registro7953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
