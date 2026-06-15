// fichero 15809 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15809;

Registro15809 crear_registro15809(int id) {
    Registro15809 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
