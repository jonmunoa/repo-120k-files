// fichero 9073 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9073;

Registro9073 crear_registro9073(int id) {
    Registro9073 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
