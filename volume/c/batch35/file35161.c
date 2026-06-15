// fichero 35161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35161;

Registro35161 crear_registro35161(int id) {
    Registro35161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
