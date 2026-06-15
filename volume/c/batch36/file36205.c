// fichero 36205 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36205;

Registro36205 crear_registro36205(int id) {
    Registro36205 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
