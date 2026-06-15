// fichero 9953 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9953;

Registro9953 crear_registro9953(int id) {
    Registro9953 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
