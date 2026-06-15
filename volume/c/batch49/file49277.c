// fichero 49277 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49277;

Registro49277 crear_registro49277(int id) {
    Registro49277 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
