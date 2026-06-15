// fichero 9053 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9053;

Registro9053 crear_registro9053(int id) {
    Registro9053 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
