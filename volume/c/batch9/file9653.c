// fichero 9653 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9653;

Registro9653 crear_registro9653(int id) {
    Registro9653 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
