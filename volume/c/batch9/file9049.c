// fichero 9049 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9049;

Registro9049 crear_registro9049(int id) {
    Registro9049 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
