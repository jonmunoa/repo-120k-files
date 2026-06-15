// fichero 37781 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37781;

Registro37781 crear_registro37781(int id) {
    Registro37781 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
