// fichero 37697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37697;

Registro37697 crear_registro37697(int id) {
    Registro37697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
