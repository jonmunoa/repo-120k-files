// fichero 9445 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9445;

Registro9445 crear_registro9445(int id) {
    Registro9445 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
