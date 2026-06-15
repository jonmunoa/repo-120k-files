// fichero 9161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9161;

Registro9161 crear_registro9161(int id) {
    Registro9161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
