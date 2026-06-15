// fichero 8161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8161;

Registro8161 crear_registro8161(int id) {
    Registro8161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
